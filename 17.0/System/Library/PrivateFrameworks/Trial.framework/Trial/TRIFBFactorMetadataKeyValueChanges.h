@interface TRIFBFactorMetadataKeyValueChanges : NSObject {
    unsigned char _changeTypeKey;
    unsigned int _replacementKey;
    unsigned char _changeTypeVal;
    unsigned int _replacementVal;
}

- (void)preserveKey;
- (void)preserveVal;
- (void)replaceKey:(id)a0;
- (void)replaceVal:(id)a0;

@end
