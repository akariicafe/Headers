@class NSString;

@interface SBSwitcherAccessoryLayoutElement : NSObject <SBSwitcherLayoutElementProviding>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)switcherLayoutElementType;
- (id)initWithType:(unsigned long long)a0;

@end
