@class NSString, NSArray, NSMutableArray;

@interface TCMessageEntry : NSObject {
    int m_tag;
    NSString *m_text;
    NSArray *m_parameters;
    NSMutableArray *m_affectedObjects;
    int m_count;
}

@property (copy, nonatomic) NSString *additionalText;
@property (nonatomic) unsigned long long timeStamp;

+ (void)initialize;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)getCount;
- (id)affectedObjects;
- (void)addAffectedObject:(id)a0;
- (id)getAdditionalText;
- (int)getMessageTag;
- (id)getMessageText;
- (id)getParameter:(unsigned int)a0;
- (unsigned long long)getParameterCount;
- (id)initWithTag:(int)a0 affectedObject:(id)a1 text:(id)a2 parameters:(char *)a3;
- (void)mergeEntries:(id)a0;
- (long long)timeStampCompare:(id)a0;

@end
