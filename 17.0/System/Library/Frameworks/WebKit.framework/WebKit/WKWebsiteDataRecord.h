@class NSString, _WKWebsiteDataSize, NSSet;

@interface WKWebsiteDataRecord : NSObject <WKObject> {
    struct ObjectStorage<API::WebsiteDataRecord> { struct type { unsigned char __lx[96]; } data; } _websiteDataRecord;
}

@property (readonly, nonatomic) _WKWebsiteDataSize *_dataSize;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSSet *dataTypes;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_originsStrings;

@end
