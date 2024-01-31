@class NSUUID, NSDictionary, NSSet;
@protocol LSMIResultRegistrantStrategy;

@interface LSMIResultRegistrant : NSObject {
    id<LSMIResultRegistrantStrategy> _strategy;
    NSUUID *_uuid;
    NSDictionary *_miDict;
    NSSet *_personas;
}

- (void)runWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_replyWithError:(id)a0 onQueue:(id)a1 block:(id /* block */)a2;
- (id)initWithContext:(id)a0 operationUUID:(id)a1 itemInfoDict:(id)a2 personas:(id)a3;
- (void)runPostProcessingForBundleID:(id)a0 success:(BOOL)a1 isSystemApp:(BOOL)a2 isPlaceholder:(BOOL)a3 registeredBothFullAppAndPlaceholder:(BOOL)a4 notificationJournaller:(id)a5;

@end
