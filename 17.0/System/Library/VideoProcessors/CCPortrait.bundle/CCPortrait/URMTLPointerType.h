@interface URMTLPointerType : NSObject

@property (nonatomic) unsigned long long elementType;
@property (nonatomic) unsigned long long access;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) unsigned long long dataSize;
@property (nonatomic) BOOL elementIsArgumentBuffer;

- (id)init;

@end
