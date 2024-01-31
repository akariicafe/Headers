@class NSString, NSObject;
@protocol OS_nw_browse_descriptor;

@interface NWBrowseDescriptor : NSObject <NWPrettyDescription>

@property (retain, nonatomic) NSObject<OS_nw_browse_descriptor> *internalDescriptor;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly, nonatomic) NSString *bonjourServiceDomain;
@property (readonly, nonatomic) NSString *bonjourServiceType;

+ (Class)copyClassForDescriptorType:(int)a0;
+ (unsigned int)descriptorType;
+ (id)descriptorWithInternalDescriptor:(id)a0;
+ (id)descriptorWithProtocolBufferData:(id)a0;
+ (BOOL)supportsBrowseCallback;

- (id)encodedData;
- (id)initWithDescriptor:(id)a0;
- (id)description;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (void).cxx_destruct;
- (id)createProtocolBufferObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)browseWithCompletionHandler:(id /* block */)a0;
- (id)initWithEncodedData:(id)a0;

@end
