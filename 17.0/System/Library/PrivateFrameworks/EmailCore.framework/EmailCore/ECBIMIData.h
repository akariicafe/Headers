@class NSData, NSURL, NSString;

@interface ECBIMIData : NSObject {
    unsigned long long _hash;
}

@property (readonly, copy, nonatomic) NSData *indicator;
@property (readonly, nonatomic) NSURL *location;
@property (readonly, nonatomic) NSURL *evidenceLocation;
@property (readonly, nonatomic) NSString *indicatorHash;
@property (readonly, nonatomic) NSString *hashAlgorithm;

+ (id)bimiDataForHeaders:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIndicator:(id)a0 location:(id)a1 evidenceLocation:(id)a2 indicatorHash:(id)a3 hashAlgorithm:(id)a4;

@end
