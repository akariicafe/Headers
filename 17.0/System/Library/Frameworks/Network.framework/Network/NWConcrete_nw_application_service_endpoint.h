@class NSString;

@interface NWConcrete_nw_application_service_endpoint : NWConcrete_nw_endpoint <OS_nw_application_service_endpoint> {
    char *alias;
    char *application_service;
    unsigned char service_identifier[16];
    char *device_name;
    char *device_model;
    char *contact_id;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyDictionary;
- (unsigned long long)getHash;
- (void)dealloc;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)a0;
- (unsigned int)type;

@end
