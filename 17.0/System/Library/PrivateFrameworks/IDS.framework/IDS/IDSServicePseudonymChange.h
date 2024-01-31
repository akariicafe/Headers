@class IDSPseudonym;

@interface IDSServicePseudonymChange : NSObject

@property (readonly, nonatomic) IDSPseudonym *pseudonym;
@property (readonly, nonatomic) unsigned long long changeType;
@property (readonly, nonatomic) long long updateFlags;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPseudonym:(id)a0 changeType:(unsigned long long)a1 updateFlags:(long long)a2;
- (BOOL)isEqualToPseudonymChange:(id)a0;

@end
