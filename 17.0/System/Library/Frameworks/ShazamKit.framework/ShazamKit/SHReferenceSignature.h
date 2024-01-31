@class NSString, SHSignature;

@interface SHReferenceSignature : NSObject

@property (readonly, copy, nonatomic) NSString *ID;
@property (readonly, nonatomic) unsigned long long trackID;
@property (readonly, nonatomic) SHSignature *signature;

- (void).cxx_destruct;
- (id)initWithID:(id)a0 trackID:(unsigned long long)a1 signature:(id)a2;

@end
