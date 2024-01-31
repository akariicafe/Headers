@class NSMutableArray;

@interface _SBSUserNotificationButtonDefinitionBuilder : NSObject {
    NSMutableArray *_definitions;
}

- (id)init;
- (id)build;
- (void).cxx_destruct;
- (void)addButtonDefinitionWithTitle:(id)a0 withConfiguration:(id /* block */)a1;

@end
