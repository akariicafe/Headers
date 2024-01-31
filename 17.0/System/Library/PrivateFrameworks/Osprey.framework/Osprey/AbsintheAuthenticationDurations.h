@class NSNumber, NSMutableDictionary, NSMutableString;

@interface AbsintheAuthenticationDurations : NSObject

@property (retain, nonatomic) NSMutableDictionary *absintheTimestamps;
@property (retain, nonatomic) NSMutableString *connectionMethod;
@property (retain, nonatomic) NSNumber *getCertificateElapsed;
@property (retain, nonatomic) NSNumber *createSessionElapsed;
@property (retain, nonatomic) NSNumber *sessionEstablishedElapsed;
@property (retain, nonatomic) NSNumber *absintheElapsed;

- (id)init;
- (void).cxx_destruct;
- (id)calculateDuration:(id)a0 and:(id)a1;
- (void)reportAbsintheAuthenticationDurations;
- (void)setAbsintheAuthenticationTimestampForKey:(id)a0;
- (void)setAbsintheConnectionMethodWith:(id)a0;

@end
