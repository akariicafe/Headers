@class NSDictionary, CRAccNavComponent;

@interface CRAccNavInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CRAccNavComponent *component;
@property (readonly, nonatomic) NSDictionary *parameters;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithComponent:(id)a0 parameters:(id)a1;
- (void)enumerateInfoTypesAndDataUsingBlock:(id /* block */)a0;
- (unsigned short)uint16ForInfoType:(unsigned short)a0;
- (unsigned char)uint8ForInfoType:(unsigned short)a0;
- (id)valueForInfoType:(unsigned short)a0;

@end
