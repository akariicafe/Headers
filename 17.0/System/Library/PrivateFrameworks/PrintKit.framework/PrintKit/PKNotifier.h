@class PKNotification;

@interface PKNotifier : NSObject {
    struct __CFUserNotification { } *_outstandingRef;
    PKNotification *_outstandingNote;
    struct __CFRunLoopSource { } *_outstandingSource;
}

+ (id)sharedNotifier;

- (id)init;
- (void).cxx_destruct;
- (void)cancelNotification:(id)a0;
- (void)startNotification:(id)a0 options:(unsigned long long)a1 dict:(id)a2;
- (id)makeAuthAlert:(id)a0 challenge:(id)a1;
- (id)makeNotice:(id)a0 message:(id)a1;
- (id)makeQuotaAlert:(id)a0 message:(id)a1 quotaURL:(id)a2;
- (id)makeRetry:(id)a0 message:(id)a1;
- (id)makeSimpleAlert:(id)a0 message:(id)a1;
- (void)notification:(struct __CFUserNotification { } *)a0 completedWithResult:(unsigned long long)a1;

@end
