@interface WeatherDaemon.WDSURLSessionTaskDelegate : NSObject <NSURLSessionTaskDelegate> {
    void /* unknown type, empty encoding */ taskContainsSensitiveData;
    void /* unknown type, empty encoding */ _taskMetrics;
    void /* unknown type, empty encoding */ _activity;
}

- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 didCreateTask:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
