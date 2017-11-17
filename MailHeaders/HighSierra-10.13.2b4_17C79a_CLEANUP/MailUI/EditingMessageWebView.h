//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TilingWebView.h"

//#import "NSFilePresenter-Protocol.h"
//#import "NSInspectorBarClient-Protocol.h"
//#import "NSTextInputClient-Protocol.h"

@class DOMHTMLAnchorElement, DOMHTMLElement, DOMNode, NSArray, NSOperationQueue, NSSet, NSString, NSURL, NSWindow;

@interface EditingMessageWebView : TilingWebView <NSFilePresenter, NSInspectorBarClient, NSTextInputClient>
{
    DOMHTMLElement *_contentElement;
    BOOL _delegateRespondsToCanInsertFromPasteboard;
    DOMNode *_cursorPositionNode;
    NSOperationQueue *_filePromiseOperationQueue;
}

+ (id)insertablePasteboardTypes;
+ (void)addEditingHistoryScriptsToGroupIfNecessary;
@property(readonly, nonatomic) NSOperationQueue *filePromiseOperationQueue; // @synthesize filePromiseOperationQueue=_filePromiseOperationQueue;
@property(nonatomic) BOOL delegateRespondsToCanInsertFromPasteboard; // @synthesize delegateRespondsToCanInsertFromPasteboard=_delegateRespondsToCanInsertFromPasteboard;
@property(retain, nonatomic) DOMNode *cursorPositionNode; // @synthesize cursorPositionNode=_cursorPositionNode;
//- (void).cxx_destruct;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (id)validAttributesForMarkedText;
- (id)attributedSubstringForProposedRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (BOOL)hasMarkedText;
- (struct _NSRange)markedRange;
- (struct _NSRange)selectedRange;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)doCommandBySelector:(SEL)arg1;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (id)textInput;
@property(readonly) NSArray *inspectorBarItemIdentifiers;
- (BOOL)validateUserInterfaceItem:(id)arg1 fallThrough:(char *)arg2;
- (BOOL)validateMenuItem:(id)arg1 fallThrough:(char *)arg2;
@property(readonly, nonatomic) BOOL selectionIsInEmptyListItem;
@property(readonly, nonatomic) BOOL selectionIsInList;
- (BOOL)selectionIsInListTypes:(id)arg1;
- (BOOL)selectionIsInListType:(id)arg1;
- (void)increaseListNestingLevel:(id)arg1;
- (void)insertListWithNumbers:(BOOL)arg1 undoTitle:(id)arg2;
- (void)decreaseListNestingLevel:(id)arg1;
- (void)convertToBulletedList:(id)arg1;
- (void)convertToNumberedList:(id)arg1;
- (void)convertListFromType:(id)arg1 toType:(id)arg2 undoTitle:(id)arg3;
- (void)layoutResizingAttachmentViews;
- (void)changeDocumentBackgroundColorToColor:(id)arg1;
- (void)makeFontSmaller:(id)arg1;
- (void)makeFontBigger:(id)arg1;
- (void)_removeFragmentBlockQuote:(id)arg1;
- (void)_removeBlockQuoteFromTree:(id)arg1;
- (void)_splitUpBlockQuotesOverlappingEndOfRange:(id)arg1;
- (void)_splitUpBlockQuotesOverlappingStartOfRange:(id)arg1;
- (void)changeQuoteLevel:(id)arg1;
- (BOOL)_removeAllQuotingFromTree:(id)arg1;
- (void)changeIndentation:(long long)arg1;
- (void)_changeIndentationIfAllowed:(long long)arg1;
- (void)decreaseIndentation:(id)arg1;
- (void)increaseIndentation:(id)arg1;
- (void)addHorizontalRule:(id)arg1;
- (void)removeLink:(id)arg1;
- (void)editLink:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)pasteWithCurrentStyle:(id)arg1;
- (void)pasteAsQuotation:(id)arg1;
- (void)paste:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (id)beginDraggingSessionWithItems:(id)arg1 event:(id)arg2 source:(id)arg3;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)saveMessageToDrafts:(id)arg1;
- (void)registerForDraggedTypes:(id)arg1;
- (void)insertNode:(id)arg1 atRange:(id)arg2;
- (void)saveSelectionForUndo;
- (void)setSelectionStart:(id)arg1 offset:(int)arg2 end:(id)arg3 offset:(int)arg4 affinity:(unsigned long long)arg5;
- (id)selectedContainerWithNameInArray:(id)arg1;
@property(readonly, copy, nonatomic) DOMHTMLAnchorElement *selectedAnchor;
@property(readonly, copy, nonatomic) DOMNode *temporaryStartingSelectionMarker;
@property(readonly, copy, nonatomic) DOMNode *temporaryEndingSelectionMarker;
- (void)deleteTemporarySelectionMarkersFromDocument:(id)arg1;
- (void)_restoreSelectionFromTemporaryMarkers:(BOOL)arg1;
- (void)restoreSelectionFromTemporaryMarkers;
- (void)insertTemporarySelectionMarkersForRange:(id)arg1;
- (BOOL)isAutomaticLinkDetectionEnabled;
- (BOOL)_removeAllFormatting:(long long)arg1;
- (void)removeAllFormatting;
- (void)removeStyle:(id)arg1;
- (BOOL)resetMainDocumentBodyAttributes;
- (BOOL)removeNonBodyChildrenAndAttributesFromMainDocumentElement;
- (BOOL)removeFormattingFromTree:(id)arg1 forDocument:(id)arg2 hasDocumentContext:(BOOL)arg3 imageStrippingMode:(long long)arg4;
- (BOOL)removeHeadFromDocument:(id)arg1;
- (void)setMainDocumentURI:(id)arg1;
- (void)setStyleProperty:(id)arg1 value:(id)arg2 priority:(id)arg3 ofElement:(id)arg4;
- (void)setValue:(id)arg1 forAttribute:(id)arg2 ofElement:(id)arg3;
- (void)_insertNode:(id)arg1 parent:(id)arg2 offset:(unsigned int)arg3;
- (void)insertNode:(id)arg1 parent:(id)arg2 nextSibling:(id)arg3;
- (void)replaceNode:(id)arg1 oldNode:(id)arg2;
- (void)deleteRange:(id)arg1;
- (void)deleteNode:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)selectionCouldBeMadeIntoALink;
@property(readonly, nonatomic) BOOL isSelectionInContentElement;
@property(copy, nonatomic) DOMHTMLElement *contentElement;
- (BOOL)_isContentEditable;
- (BOOL)_replaceSelectionWithFragment:(id)arg1 attachments:(id)arg2 pasteboard:(id)arg3 types:(id)arg4 action:(long long)arg5 options:(unsigned long long)arg6 isPlainText:(BOOL)arg7;
- (BOOL)insertImageURL:(id)arg1 forAction:(long long)arg2;
- (BOOL)replaceSelectionUsingContext:(id)arg1;
- (id)_createAttachmentsForResources:(id)arg1 inFragment:(id)arg2;
- (void)_clearExistingHTML;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2 resourcesToAttach:(id)arg3;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (BOOL)_replaceSelectionWithPasteboardContentsDraggingInfo:(id)arg1 pasteboard:(id)arg2 pasteboardType:(id)arg3 action:(long long)arg4 options:(unsigned long long)arg5;
- (BOOL)_replaceSelectionWithContentsOfWebpage:(id)arg1;
- (BOOL)replaceSelectionWithPasteboardContentsDraggingInfo:(id)arg1 pasteboardType:(id)arg2 action:(long long)arg3 options:(unsigned long long)arg4;
- (BOOL)replaceSelectionWithPasteboardContentsPasteboard:(id)arg1 pasteboardType:(id)arg2 action:(long long)arg3 options:(unsigned long long)arg4;
- (unsigned long long)pastedContactCounter;
- (unsigned long long)pastedGraphicCounter;
@property(retain, nonatomic) id /*<EditingMessageWebViewDelegate>*/ editingDelegate;
- (id)mailPreferredPboardTypeFromTypes:(id)arg1 pasteboard:(id)arg2 isForDrag:(BOOL)arg3 preferHTML:(BOOL)arg4;
- (BOOL)isActive;
- (BOOL)maintainsInactiveSelection;
- (void)_editingMessageWebViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;
@property(readonly) NSWindow *window;

@end

