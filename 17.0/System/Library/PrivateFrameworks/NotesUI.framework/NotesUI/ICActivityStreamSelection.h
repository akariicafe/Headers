@class NSSet, NSData, NSDate, ICTTTextEditFilter;

@interface ICActivityStreamSelection : NSObject <NSCopying>

@property (copy, nonatomic) NSSet *itemIDs;
@property (copy, nonatomic) ICTTTextEditFilter *filter;
@property (copy, nonatomic) NSDate *displayDate;
@property (readonly, copy, nonatomic) NSData *encodedData;

+ (id)objc_selectionFromData:(id)a0;
+ (id)selectionFromData:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFilter:(id)a0 displayDate:(id)a1;
- (id)initWithItemIDs:(id)a0 filter:(id)a1 displayDate:(id)a2;
- (id)initWithMentions:(id)a0;
- (id)objc_encodedData;
- (id)objc_initWithMentions:(id)a0;

@end
