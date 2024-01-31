@class NSMutableArray;

@interface PLContentChanges : NSObject

@property (retain, nonatomic) NSMutableArray *container;
@property (retain, nonatomic) NSMutableArray *updatedContent;

- (void)cleanupState;
- (void).cxx_destruct;

@end
