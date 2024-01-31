@class NSSet;

@interface _PASImmutableDomainSelection : _PASDomainSelection {
    NSSet *_domains;
}

- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (id)allDomains;
- (BOOL)containsDomain:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (BOOL)isEmpty;

@end
