@class NSString, NSArray, NSError;

@interface PGOneUpRelatedRequestHandler : NSObject {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ _graphManager;
}

- (id)init;
- (void)requestAssetLocalIdentifiersWithSceneOverlapFromAssetLocalIdentifier:(NSString *)a0 error:(void (^)(NSArray *, NSError *))a1;
- (void).cxx_destruct;
- (id)initWithGraphManager:(id)a0 error:(id *)a1;
- (void)requestAssetLocalIdentifiersTakenNearCoordinatesFromAssetLocalIdentifier:(NSString *)a0 error:(void (^)(NSArray *, NSError *))a1;

@end
