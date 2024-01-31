@class NSString;

@interface GEOPlaceCalculateFreeableSpaceReply : GEOXPCReply <GEOXPCReply>

@property (nonatomic) unsigned long long freeableBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (BOOL)isValid;

@end
