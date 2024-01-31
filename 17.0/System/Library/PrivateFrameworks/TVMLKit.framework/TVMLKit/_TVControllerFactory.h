@interface _TVControllerFactory : NSObject

- (id)init;
- (id)_carouselControllerForElement:(id)a0 layout:(id)a1 existingController:(id)a2;
- (id)_gridControllerForElement:(id)a0 existingController:(id)a1;
- (id)_listControllerForElement:(id)a0 existingController:(id)a1;
- (void)_registerControllerCreators;
- (id)_shelfControllerForElement:(id)a0 existingController:(id)a1;
- (id)_textFieldControllerForElement:(id)a0 existingController:(id)a1;

@end
