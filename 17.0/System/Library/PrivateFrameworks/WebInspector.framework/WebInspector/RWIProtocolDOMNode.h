@class NSString, NSArray;

@interface RWIProtocolDOMNode : RWIProtocolJSONObject

@property (nonatomic) int nodeId;
@property (nonatomic) int nodeType;
@property (copy, nonatomic) NSString *nodeName;
@property (copy, nonatomic) NSString *localName;
@property (copy, nonatomic) NSString *nodeValue;
@property (copy, nonatomic) NSString *frameId;
@property (nonatomic) int childNodeCount;
@property (copy, nonatomic) NSArray *children;
@property (copy, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSString *documentURL;
@property (copy, nonatomic) NSString *baseURL;
@property (copy, nonatomic) NSString *publicId;
@property (copy, nonatomic) NSString *systemId;
@property (copy, nonatomic) NSString *xmlVersion;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) long long pseudoType;
@property (nonatomic) long long shadowRootType;
@property (nonatomic) long long customElementState;
@property (retain, nonatomic) RWIProtocolDOMNode *contentDocument;
@property (copy, nonatomic) NSArray *shadowRoots;
@property (retain, nonatomic) RWIProtocolDOMNode *templateContent;
@property (copy, nonatomic) NSArray *pseudoElements;
@property (copy, nonatomic) NSString *contentSecurityPolicyHash;
@property (copy, nonatomic) NSArray *layoutFlags;

- (id)initWithNodeId:(int)a0 nodeType:(int)a1 nodeName:(id)a2 localName:(id)a3 nodeValue:(id)a4;

@end
