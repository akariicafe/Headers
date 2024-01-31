@class NSCalendar, NSObject;
@protocol OS_dispatch_queue;

@interface WBSHistorySessionIntervalCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSCalendar *_calendar;
    struct Vector<double, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { double *m_buffer; unsigned int m_capacity; unsigned int m_size; } _intervalCache;
}

- (id)init;
- (id).cxx_construct;
- (id)initWithCalendar:(id)a0;
- (void).cxx_destruct;
- (double)_beginningOfSessionContainingTime:(double)a0;
- (void)_getSessionIntervalForTime:(double)a0 beginningOfDay:(double *)a1 beginningOfNextDay:(double *)a2;
- (double)beginningOfSessionContainingTime:(double)a0;

@end
