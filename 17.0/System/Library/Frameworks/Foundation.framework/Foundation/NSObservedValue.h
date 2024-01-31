@class NSError;

@interface NSObservedValue : NSObject {
    id _contents;
    id _lastOriginator;
    int _tag;
}

@property (retain) id value;
@property (retain) NSError *error;
@property BOOL finished;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (BOOL)_isToManyChangeInformation;
- (id)copyToHeap;

@end
