@class NSData, UTType;

@interface MADVideoRemoveBackgroundResult : MADVideoResult

@property (readonly, nonatomic) UTType *uniformTypeIdentifier;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) NSData *data;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUniformTypeIdentifier:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 data:(id)a3;

@end
