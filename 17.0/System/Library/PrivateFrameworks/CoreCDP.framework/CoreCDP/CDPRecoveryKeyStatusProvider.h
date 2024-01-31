@class CDPContext;

@interface CDPRecoveryKeyStatusProvider : NSObject {
    CDPContext *_context;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isRecoveryKeySetInSOSWithError:(id *)a0;
- (BOOL)idmsHasRK;
- (BOOL)isRecoveryKeySetInOctagonWithError:(id *)a0;

@end
