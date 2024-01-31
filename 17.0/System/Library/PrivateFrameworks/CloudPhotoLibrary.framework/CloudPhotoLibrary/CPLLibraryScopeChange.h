@class NSData, NSString;

@interface CPLLibraryScopeChange : CPLScopeChange

@property (copy, nonatomic) NSData *rewindAnchorsPerSharingScopesData;
@property (copy, nonatomic) NSString *problematicFormerSharedScopeIdentifier;

- (void).cxx_destruct;
- (BOOL)hasProblematicFormerSharedScope;
- (id)rewindAnchorsPerSharingScopes;
- (void)setRewindAnchorsPerSharingScopes:(id)a0;

@end
