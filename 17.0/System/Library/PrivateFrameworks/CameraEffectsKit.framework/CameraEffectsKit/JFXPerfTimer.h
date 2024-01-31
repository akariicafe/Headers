@interface JFXPerfTimer : NSObject {
    double _start;
    double _end;
}

- (id)init;
- (void)start;
- (double)end;
- (double)elapsedTime;
- (double)elapsedTimeMS;

@end
