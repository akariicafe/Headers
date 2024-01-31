@class NSString, NSDictionary;

@interface WBSOfflineSearchRemoteDisablementSnapshot : NSObject <WBSRemotePlistSnapshot> {
    NSDictionary *_disablementDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)plistDataWithFormat:(unsigned long long)a0;
- (id)initWithPlistData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)_isCurrentSafariVersionDisabled:(id)a0;
- (BOOL)areOfflineSearchSuggestionsDisabledRemotelyForSearchProvider:(id)a0;

@end
