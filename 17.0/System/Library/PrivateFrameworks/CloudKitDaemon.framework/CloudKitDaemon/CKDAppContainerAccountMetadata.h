@class CKContainerOptions;

@interface CKDAppContainerAccountMetadata : NSObject

@property (retain, nonatomic) CKContainerOptions *containerOptions;
@property (nonatomic) long long tokenRegistered;

- (id)init;
- (id)initWithContainerOptions:(id)a0 tokenRegistered:(long long)a1;
- (void).cxx_destruct;

@end
