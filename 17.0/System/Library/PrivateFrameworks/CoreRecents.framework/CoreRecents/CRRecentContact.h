@class NSString, NSDictionary, NSArray, NSDate, NSNumber, NSMutableArray;

@interface CRRecentContact : NSObject <NSSecureCoding> {
    NSMutableArray *_recentDates;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long contactID;
@property (nonatomic) long long recentID;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *recentsDomain;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *rawAddress;
@property (copy, nonatomic) NSString *lastSendingAddress;
@property (copy, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSNumber *weight;
@property (retain, nonatomic) NSNumber *decayedWeight;
@property (copy, nonatomic) NSArray *recentDates;
@property (copy, nonatomic) NSArray *members;
@property (copy, nonatomic) NSString *originalSource;
@property (nonatomic) unsigned long long groupKind;
@property (readonly, nonatomic) unsigned long long countOfRecents;
@property (readonly, copy, nonatomic) NSDate *mostRecentDate;
@property (readonly, copy, nonatomic) NSDate *leastRecentDate;
@property (readonly, nonatomic, getter=isGroup) BOOL group;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasFullTextMatch:(id)a0;
- (struct __CFStringTokenizer { } *)_wordTokenizerForString:(id)a0 locale:(id)a1;
- (void)_enumerateWordsInString:(id)a0 usingBlock:(id /* block */)a1;
- (void)applyWeight:(id)a0;
- (id)archivableContactID;
- (id)archivableGroupKind;
- (id)archivableGroupMembers;
- (id)archivableMetadata;
- (id)archivableRecentID;
- (void)enumerateArchivablePropertiesWithBlock:(id /* block */)a0;
- (id)initWithAddress:(id)a0 displayName:(id)a1 kind:(id)a2 recentDate:(id)a3 recentsDomain:(id)a4;
- (id)initWithContactID:(long long)a0;
- (id)initWithMembers:(id)a0 displayName:(id)a1 recentDate:(id)a2 recentsDomain:(id)a3;
- (void)insertDate:(id)a0 atIndex:(unsigned long long)a1 required:(BOOL)a2;
- (unsigned long long)insertionIndexForDate:(id)a0 wouldBeUnique:(BOOL *)a1;
- (void)lazilyCreateRecentDates;
- (void)recordRecentEventForDate:(id)a0 userInitiated:(BOOL)a1;
- (id)sanitizedDescription;
- (void)setArchivableContactID:(id)a0;
- (void)setArchivableGroupKind:(id)a0;
- (void)setArchivableGroupMembers:(id)a0;
- (void)setArchivableMetadata:(id)a0;
- (void)setArchivableRecentID:(id)a0;

@end
