@class _PASLock;

@interface PPCalendarInternPool : NSObject {
    _PASLock *_poolLock;
}

- (id)init;
- (id)internedCalendarWithEKCalendar:(id)a0;
- (void)clearPool;
- (void).cxx_destruct;

@end
