@interface PUViewModelChange : NSObject

@property (readonly, nonatomic) BOOL hasChanges;

- (void)setHasChanges;

@end
