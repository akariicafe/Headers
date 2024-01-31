@class NSArray;

@interface DocumentUnderstanding.DUResponse : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ poem;
    void /* unknown type, empty encoding */ posTags;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ topics;
@property (nonatomic, retain) void /* unknown type, empty encoding */ structuredEntities;
@property (nonatomic, retain) void /* unknown type, empty encoding */ languageTags;
@property (nonatomic, retain) void /* unknown type, empty encoding */ userInterfaceUnderstandingResults;
@property (nonatomic, retain) void /* unknown type, empty encoding */ documentCategories;
@property (nonatomic, retain) void /* unknown type, empty encoding */ foundInEventResult;
@property (nonatomic, copy) NSArray *poem;
@property (nonatomic, copy) NSArray *posTags;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
