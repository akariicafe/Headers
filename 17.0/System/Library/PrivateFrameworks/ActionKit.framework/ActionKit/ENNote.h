@class NSMutableArray, NSString, NSDictionary, EDAMNote, NSArray, NSDate, ENNoteContent;

@interface ENNote : NSObject <WFNaming> {
    NSMutableArray *_resources;
}

@property (readonly, copy, nonatomic) NSString *wfName;
@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSString *cachedENMLContent;
@property (retain, nonatomic) EDAMNote *serviceNote;
@property (retain, nonatomic) NSDictionary *edamAttributes;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) ENNoteContent *content;
@property (copy, nonatomic) NSArray *tagNames;
@property (nonatomic) BOOL isReminder;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSArray *resources;

- (void)addResource:(id)a0;
- (void)setResources:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeAllResources;
- (id)EDAMNote;
- (id)EDAMNoteToReplaceServiceNoteGUID:(id)a0;
- (id)enmlContent;
- (id)generateENMLContent;
- (void)generateHTMLData:(id /* block */)a0;
- (void)generateWebArchiveData:(id /* block */)a0;
- (id)initWithServiceNote:(id)a0;
- (void)invalidateCachedENML;
- (BOOL)validateForLimits;

@end
