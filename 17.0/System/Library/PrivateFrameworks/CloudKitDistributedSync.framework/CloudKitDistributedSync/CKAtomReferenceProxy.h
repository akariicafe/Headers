@interface CKAtomReferenceProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (id)reference;
- (id)location;
- (id)timestamp;
- (unsigned char)type;

@end
