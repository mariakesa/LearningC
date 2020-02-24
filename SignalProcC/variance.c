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
