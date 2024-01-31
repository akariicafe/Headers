@class CUTWeakReference, NSDate;

@interface IMDInconsistency : NSObject {
    CUTWeakReference *_contextWeakReference;
}

@property (weak, nonatomic) id context;
@property (readonly) NSDate *firstOccurrence;
@property (nonatomic) unsigned long long count;

- (id)init;
- (BOOL)shouldJettison:(id *)a0;

@end
