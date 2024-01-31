@class TSTCellStyle, NSString, TSWPParagraphStyle, TSDCommentStorage, NSDate, TSUFormatReferenceObject, TSTRichTextPayload;
@protocol TSUMultipleChoiceListChoiceProviding;

@interface TSTCell : NSObject <NSCopying> {
    struct { unsigned char mUnused : 8; unsigned char mValueType : 8; unsigned short mCellFlags : 16; union { double mDouble; struct { unsigned int mID; NSString *mString; } mString; NSDate *mDate; } mValue; unsigned int mCellStyleID; TSTCellStyle *mCellStyle; unsigned int mTextStyleID; TSWPParagraphStyle *mTextStyle; unsigned int mRichTextPayloadID; TSTRichTextPayload *mRichTextPayload; unsigned int mCommentStorageID; TSDCommentStorage *mCommentStorage; struct { unsigned short mExplicitFormatFlags : 16; unsigned int mCurrentCellFormatID; struct { int mFormatType; union { struct { NSString *mCurrencyCode; unsigned char mDecimalPlaces : 8; unsigned char mNegativeStyle : 3; unsigned char mShowThousandsSeparator : 1; unsigned char mUseAccountingStyle : 1; } mNumberFormatStruct; struct { unsigned char mFractionAccuracy : 8; } mFractionFormatStruct; struct { unsigned char mBase : 8; unsigned char mBasePlaces : 8; unsigned char mBaseUseMinusSign : 1; } mBaseFormatStruct; struct { unsigned char mSuppressDateFormat : 1; unsigned char mSuppressTimeFormat : 1; NSString *mDateTimeFormat; } mDateFormatStruct; struct { unsigned char mUseAutomaticUnits : 1; int mDurationUnitSmallest; int mDurationUnitLargest; int mDurationStyle; } mDurationFormatStruct; struct { unsigned int mCustomFormatID; struct *mData; } mCustomFormatStruct; struct { double mMinimum; double mMaximum; double mIncrement; int mDisplayFormatType; unsigned char mOrientation : 2; unsigned char mPosition : 2; } mControlFormatStruct; struct { int mInitialValue; unsigned int mMultipleChoiceListFormatID; id<TSUMultipleChoiceListChoiceProviding> mData; } mMultipleChoiceListFormatStruct; } ; } mCurrentCellFormat; unsigned int mNumberFormatID; TSUFormatReferenceObject *mNumberFormatRef; unsigned int mCurrencyFormatID; TSUFormatReferenceObject *mCurrencyFormatRef; unsigned int mDurationFormatID; TSUFormatReferenceObject *mDurationFormatRef; unsigned int mDateFormatID; TSUFormatReferenceObject *mDateFormatRef; unsigned int mControlFormatID; TSUFormatReferenceObject *mControlFormatRef; unsigned int mCustomFormatID; TSUFormatReferenceObject *mCustomFormatRef; unsigned int mBaseFormatID; TSUFormatReferenceObject *mBaseFormatRef; unsigned int mMultipleChoiceListFormatID; TSUFormatReferenceObject *mMultipleChoiceListFormatRef; } mCellFormats; unsigned char mStrokePresetNumber; } mPrivate;
}

+ (id)cell;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithCell:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)inflateFromStorageRef:(struct TSTCellStorage { struct { unsigned char x0; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3; unsigned short x4 : 16; unsigned short x5 : 16; unsigned short x6 : 16; unsigned short x7 : 16; } x0; unsigned char x1[0]; } *)a0 dataStore:(id)a1;
- (void)inflateFromStorageRef:(struct TSTCellStorage { struct { unsigned char x0; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3; unsigned short x4 : 16; unsigned short x5 : 16; unsigned short x6 : 16; unsigned short x7 : 16; } x0; unsigned char x1[0]; } *)a0 dataStore:(id)a1 suppressingFormulaInflation:(BOOL)a2;
- (id)initWithStorageRef:(struct TSTCellStorage { struct { unsigned char x0; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3; unsigned short x4 : 16; unsigned short x5 : 16; unsigned short x6 : 16; unsigned short x7 : 16; } x0; unsigned char x1[0]; } *)a0 dataStore:(id)a1;
- (BOOL)isCellContentsEqualToCell:(id)a0;
- (void)writeToStorageRef:(struct TSTCellStorage { struct { unsigned char x0; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3; unsigned short x4 : 16; unsigned short x5 : 16; unsigned short x6 : 16; unsigned short x7 : 16; } x0; unsigned char x1[0]; } *)a0;

@end
