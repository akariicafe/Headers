@class NSString, WBSHistoryItem, WBSHistoryVisit;

@interface WBSHistoryVisitIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _hash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, nonatomic) double visitTime;
@property (retain, nonatomic) WBSHistoryItem *associatedHistoryItem;
@property (retain, nonatomic) WBSHistoryVisit *associatedHistoryVisit;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURLString:(id)a0 visitTime:(double)a1;

@end
