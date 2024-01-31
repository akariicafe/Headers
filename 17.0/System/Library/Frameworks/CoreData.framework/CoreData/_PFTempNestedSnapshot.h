@class NSKnownKeysDictionary;

@interface _PFTempNestedSnapshot : NSObject {
    NSKnownKeysDictionary *_snapshot;
    unsigned long long _version;
}

- (id)_snapshot_;
- (void)dealloc;
- (id)initWithOwnedKKsD:(id)a0 andVersion:(unsigned long long)a1;
- (unsigned int)_versionNumber;
- (id)valueForKey:(id)a0;
- (const id *)knownKeyValuesPointer;

@end
