@class NSString;

@interface VSCacheUpdateRequest : NSObject {
    NSString *_modelID;
    NSString *_classID;
}

- (id)modelIdentifier;
- (void)dealloc;
- (id)description;
- (id)classIdentifier;
- (id)coalescedRequest:(id)a0;
- (id)initWithModelIdentifier:(id)a0 classIdentifier:(id)a1;

@end
