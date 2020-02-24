#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIG_LENGTH 320

extern double InputSignal_f32_1kHz_15kHz[SIG_LENGTH];
double calc_signal_mean(double *sig_src_arr, int sig_length );
double calc_signal_variance(double *sig_src_arr, double mean, int sig_length);
double calc_signal_std(double sig_var);
double MEAN;
double VARIANCE;
double STD;

int main()
{

    MEAN = calc_signal_mean(&InputSignal_f32_1kHz_15kHz[0],SIG_LENGTH);
    VARIANCE=calc_signal_variance(&InputSignal_f32_1kHz_15kHz[0],MEAN,SIG_LENGTH);
    STD=calc_signal_std(VARIANCE);
    printf("\n\nMean = %f\n\n\n",MEAN);
    printf("\n\nVariance = %f\n\n\n",VARIANCE);
    printf("\n\nStandard deviation = %f\n\n\n",STD);
    return 0;
}





double calc_signal_mean(double *sig_src_arr, int sig_length )
{
    double _mean =0.0;
    for(int i =0;i<sig_length;i++)
    {
        _mean = _mean + sig_src_arr[i];

    }

    _mean = _mean/(double)sig_length;
    return _mean;
}

double calc_signal_variance(double *sig_src_arr, double mean, int sig_length)
{
    double _variance =0.0;
    for(int i =0;i<sig_length;i++)
    {
        _variance = _variance + pow((sig_src_arr[i]-mean),2);

    }

    _variance = _variance/(double)sig_length;
    return _variance;

}

double calc_signal_std(double sig_var)
{
    double _std=0.0;
    _std=sqrt(sig_var);
}

