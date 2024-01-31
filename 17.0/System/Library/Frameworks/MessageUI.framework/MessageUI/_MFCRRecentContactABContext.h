@interface _MFCRRecentContactABContext : NSObject {
    void *_existingPerson;
    void *_interimPerson;
    int _identifier;
}

- (id)init;
- (void)dealloc;
- (void)setIdentifier:(int)a0;
- (int)identifier;
- (void *)existingPerson;
- (void *)interimPerson;
- (void)setExistingPerson:(void *)a0;
- (void)setInterimPerson:(void *)a0;

@end
