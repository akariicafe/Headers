@class NSMutableArray;

@interface _SBSUserNotificationTextFieldDefinitionBuilder : NSObject {
    NSMutableArray *_definitions;
}

- (id)init;
- (id)build;
- (void).cxx_destruct;
- (void)addTextFieldDefinitionWithConfiguration:(id /* block */)a0;

@end
