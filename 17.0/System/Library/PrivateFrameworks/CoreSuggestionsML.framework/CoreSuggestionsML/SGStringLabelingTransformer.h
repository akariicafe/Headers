@class NSString, NSDictionary;

@interface SGStringLabelingTransformer : NSObject <PMLTransformerProtocol> {
    NSDictionary *_labelMapping;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertLabelsToMapping:(id)a0;
+ (id)withLabelStrings:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;
- (id)initWithLabelMapping:(id)a0;
- (id)initWithLabelStrings:(id)a0;
- (BOOL)isEqualToStringLabelingTransformer:(id)a0;

@end
