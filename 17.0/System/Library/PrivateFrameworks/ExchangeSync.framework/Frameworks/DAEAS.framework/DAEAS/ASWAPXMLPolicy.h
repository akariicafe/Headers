@class NSString;

@interface ASWAPXMLPolicy : ASPolicy {
    NSString *_data;
}

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void)_setData:(id)a0;
- (id)data;
- (void).cxx_destruct;
- (id)_policyForWAPProvisioningXMLData;
- (id)_wbxmlPolicyDict;
- (id)perDomainDictsForPolicy;

@end
