@class NSString;

@interface SGContactSharingTransformer : NSObject <PMLTransformerProtocol> {
    struct { unsigned long long s[2]; } _rng;
}

@property (retain) NSString *language;
@property long long windowLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLanguage:(id)a0 windowLength:(long long)a1;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (BOOL)isEqualToContactSharingTransformer:(id)a0;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;

@end
