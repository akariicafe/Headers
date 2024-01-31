@class NSString;

@interface SXComponentBlueprintFactory : NSObject <SXComponentBlueprintFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentBlueprintForComponent:(id)a0 layout:(id)a1 sizer:(id)a2;

@end
