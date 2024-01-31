@class MPModelObject;

@interface MPLibraryKeepLocalStatusObserverConfiguration : NSObject

@property (nonatomic) long long enableState;
@property (retain, nonatomic) MPModelObject *identifyingModelObject;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
