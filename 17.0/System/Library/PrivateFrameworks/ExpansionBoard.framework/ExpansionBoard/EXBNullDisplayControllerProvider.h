@class NSString, NSMutableDictionary;

@interface EXBNullDisplayControllerProvider : NSObject <EXBDisplayControllerProviding> {
    NSMutableDictionary *_createdControllers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)controllerForDisplay:(id)a0;
- (BOOL)didCreateControllers;
- (id)displayControllerForDisplay:(id)a0 configuration:(id)a1;

@end
