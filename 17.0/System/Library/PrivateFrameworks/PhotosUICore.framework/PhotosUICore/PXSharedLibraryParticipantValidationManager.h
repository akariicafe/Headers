@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PXSharedLibraryParticipantValidationManager : NSObject {
    NSMutableDictionary *_queryAddressesToQueries;
    NSObject<OS_dispatch_queue> *_ivarQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)requestValidationForPhoneNumbers:(id)a0 emailAddresses:(id)a1 resultHandler:(id /* block */)a2;

@end
