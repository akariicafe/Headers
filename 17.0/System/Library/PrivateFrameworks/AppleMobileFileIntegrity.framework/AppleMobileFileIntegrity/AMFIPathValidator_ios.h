@class NSData, NSError, NSURL, NSNumber;

@interface AMFIPathValidator_ios : NSObject {
    NSURL *_url;
    NSNumber *_offset;
    int _flags;
    BOOL _validated;
    unsigned long long _bootargs;
    NSData *_cdhash;
    NSData *_profileData;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned int signerType;
@property (readonly, nonatomic) BOOL areEntitlementsValidated;
@property (readonly, nonatomic) NSData *profileData;

- (BOOL)validateWithError:(id *)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)computedCdHash:(unsigned char[20])a0;
- (id)initWithURL:(id)a0 withFileOffset:(unsigned long long)a1;
- (id)initWithURL:(id)a0 withFileOffset:(unsigned long long)a1 withFlags:(int)a2;
- (id)initWithURL:(id)a0 withFileOffsetAsNumber:(id)a1 withFlags:(int)a2;
- (id)initWithURL:(id)a0 withFlags:(int)a1;
- (int)isSignerType;

@end
